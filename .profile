#jenv set Java path
export PATH="$HOME/.jenv/bin:$PATH"

alias rlp=". ~/.profile"

function whatsize() {
        ls  -l | sort -r -nk 5,5 | awk '{print $NF}' | xargs -n1 du -s $1 2>/dev/null | sort -rnk1,1
}


#Work stuff
ibmhome="/gsa/ausgsa/home/e/t/etang/"

alias ibm="ssh freezer4.aus.stglabs.ibm.com"

vim2ibm() {
        sudo scp ~/.vimrc etang@freezer4.aus.stglabs.ibm.com:/gsa/ausgsa/home/e/t/etang/
        sudo scp -r ~/.vim etang@freezer4.aus.stglabs.ibm.com:/gsa/ausgsa/home/e/t/etang/
}
