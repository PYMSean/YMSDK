Pod::Spec.new do |spec| 
   spec.name             = 'YMSDK'
   spec.version          = '1.0.0'
   spec.license          = { :type => 'Copyright',:text => 'Copyright 2019 ©  All rights reserved.'}
   spec.homepage         = 'http://www.baidu.com'
   spec.authors          = { 'joy' => '604862346@qq.com' }
   spec.summary          = 'content for iOS.'
   spec.ios.deployment_target = '8.0'
   spec.source           = { :git => 'https://github.com/PYMSean/YMSDK.git', :tag => spec.version }
   spec.requires_arc     = true
   spec.ios.frameworks = 'Foundation'
   spec.source_files  = "YMSDK/**/*.{h,m}"

 end
