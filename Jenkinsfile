pipeline {
  agent any
  stages {
    stage('error') {
      steps {
        cmakeBuild(cleanBuild: true, installation: 'CMake 3.13.4 Auto Install', sourceDir: '.')
      }
    }
  }
}