//
//  abtest.h
//  LibraSDKFramework
//
//  Created by 李方健 on 2023/1/5.
//

#ifndef ABTEST_H
#define ABTEST_H

#include <string>
#include <map>
#include <vector>
#include "../core/scene.h"
#include "../core/domain.h"
#include "../core/layer.h"
#include "../core/experiment.h"
#include "../core/group.h"
#include "../core/exptreepath.h"
#include "../message/response.h"
#include "../nlohmann/json.hpp"

using json = nlohmann::json;

namespace libra
{
    class ABTest
    {
    public:
        /**
         * add exp config before check group
         * @param expConfig the exp config; json object string
         * @return InitResponse
         */
        InitResponse add(const std::string &expConfig);

        /**
         * check group for specified expName
         * @param userId user id (eg: uid,deviceId .etc)
         * @param expName exp name
         * @return CheckResponse
         */
        CheckResponse check(const std::string &userId, const std::string &expName);

    public:
        std::map<std::string, Scene> m_exp2Info;

    public:
        ABTest();

        ~ABTest();

        Data build_check_resp(ExpTreePath &expTreePath);

        std::string build_log(ExpTreePath &expTreePath);

        Scene parse_scene(const json &jsonData);

        std::vector<Domain> parse_domain(const json &domainArray);

        std::vector<Layer> parse_layer(const json &layerArray);

        std::vector<Experiment> parse_experiment(const json &experimentArray);

        std::vector<Group> parse_group(const json &groupArray);
    };

} // namespace libra

#endif
