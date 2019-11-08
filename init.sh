GERRIT_USERNAME=fu.qiang
PROJECT=db410c-linux-v4.14.96
SSH_PORT=29418
repo init -u ssh://$GERRIT_USERNAME@review.geniatech.cn:$SSH_PORT/platform/manifest -b master -m $PROJECT.xml --repo-url=ssh://$GERRIT_USERNAME@review.geniatech.cn:$SSH_PORT/git-repo.git
repo sync -c -j8
