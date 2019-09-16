#
# Be sure to run `pod lib lint MZStreamCore.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MZStreamCore'
  s.version          = '0.1.2'
  s.summary          = 'A short description of MZStreamCore.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/derek-x-wang/MZStreamCore'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'derek-x-wang' => 'derekxinzhewang@gmail.com' }
  s.source           = { :git => 'https://github.com/derek-x-wang/MZStreamCore.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.3'

  s.ios.vendored_frameworks = 'MZStreamCore.framework'

  s.source_files = 'MZStreamCore/Classes/**/*'
  
  # s.resource_bundles = {
  #   'MZStreamCore' => ['MZStreamCore/Assets/*.png']
  # }

  s.public_header_files = 'MZStreamCore/Classes/OpenALPlayer/OpenALPlayer.h', 'MZStreamCore/Classes/AudioQueuePlayer/AudioQueuePlayer.h','MZStreamCore/Classes/LiveStreamer.h', 'MZStreamCore/Classes/HttpUploader.h','MZStreamCore/Classes/GenericEncoder.h', 'MZStreamCore/Classes/AAC/AACEncoder.h','MZStreamCore/Classes/AAC/FDKAACEncoder.h','MZStreamCore/Classes/AVC/H264Encoder.h','MZStreamCore/Classes/HEVC/HEVCEncoder.h','MZStreamCore/Classes/HLSv7HttpStreamer.h','MZStreamCore/Classes/HLSv7Demuxer.h', 'MZStreamCore/Classes/AAC/FDKAACDecoder.h'
  s.frameworks = 'CoreMedia', 'CoreVideo', 'CoreAudio', 'AudioToolbox', 'VideoToolbox', 'AVFoundation', 'OpenAL'
  s.library     = 'c++'
  s.xcconfig = {
      'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
      'CLANG_CXX_LIBRARY' => 'libc++'
  }
  # s.dependency 'AFNetworking', '~> 2.3'
  # https://stackoverflow.com/questions/19481125/add-static-library-to-podspec
  s.subspec 'FDKAAC' do |fdkaac|
    fdkaac.vendored_libraries = 'libfdk-aac.a'
    fdkaac.libraries = 'fdk-aac'
    fdkaac.xcconfig = { 'HEADER_SEARCH_PATHS' => "${PODS_ROOT}/libfdk-aac.a" }
  end
end
