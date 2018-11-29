Pod::Spec.new do |s| 
    s.name = "TKABTestSDK" # 名称 （同工程名，写错了就用不了了）
    s.version = "0.1" # 代码库的版本 
    s.summary = "泰生活ABTest项目的sdk" # 简介 
    s.description = "包含获取当前项目的ABTest选项功能，正在测试阶段，仅有测试接口" # 描述 

    s.homepage = "http://taikang.com" # 开发者主页 
    s.author = { "徐璇" => "215216267@qq.com" } # 作者名称 和 邮箱 
    s.platform = :ios, "9.0" # 代码库最低支持的版本 
    s.source = { :git => "TKABTestSDK.framework",:tag => s.version}   # 代码的Clone 地址 和 tag 版本 
    s.requires_arc = true # 框架是否使用的ARC
    s.license = "MIT"
    s.vendored_frameworks = 'TKABTestSDK.framework'  # 引入自己生成的framework路径 

    s.pod_target_xcconfig = {'ENABLE_BITCODE' => 'NO'}   # 编译flag


end