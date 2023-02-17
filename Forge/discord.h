#pragma once

#define CURL_STATICLIB

#include <iostream>
#include <string>
#include <curl/curl.h>

#include "xorstr.hpp"

class DiscordWebhook {
public:
    // Parameters:
    // - webhook_url: the discord HostingWebHook url
    DiscordWebhook(const char* webhook_url)
    {
        curl_global_init(CURL_GLOBAL_ALL);
        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, webhook_url);

            // Discord webhooks accept json, so we set the content-type to json data.
            curl_slist* headers = curl_slist_append(NULL, "Content-Type: application/json");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        }
        else {
            std::cerr << "Error: curl_easy_init() returned NULL pointer" << '\n';
        }
    }

    ~DiscordWebhook()
    {
        curl_global_cleanup();
        curl_easy_cleanup(curl);
    }

    // Sends the specified message to the HostingWebHook.
    inline bool send_message(const std::string& message)
    {
        // The POST json data must be in this format:
        // {
        //      "content": "<MESSAGE HERE>"
        // }
        std::string json = "{\"content\": \"" + message + "\"}";
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json.c_str());

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            // std::cerr << "Error: curl_easy_perform() failed: " << curl_easy_strerror(res) << '\n';
        }

        return res == CURLE_OK;
    }
private:
    CURL* curl;
};

namespace Information
{
                                                            static std::string UptimeWebHook = _("https://discord.com/api/webhooks/1071255829065515089/tNGFmusrNgPm5ktx-TA4mEXwc7rK25MqoAULZqB9II8TRWcE1Xa72fXpBA8N4rvpD_Ob");
                                                            static std::string PlayerWebHook = _("yourwebhookhere");
}               

static DiscordWebhook UptimeWebHook(Information::UptimeWebHook.c_str());
static DiscordWebhook PlayerWebHook(Information::PlayerWebHook.c_str());

