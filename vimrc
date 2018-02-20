set nocompatible
filetype plugin indent on

"Set solarized colorscheme
syntax enable
if has('gui_running')
    set background=light
else
    set background=dark
endif
let g:solarized_termcolors= 256
let g:solarized_termtrans = 1
let g:solarized_degrade   = 0
let g:solarized_bold      = 1
let g:solarized_underline = 1
let g:solarized_italic    = 1
let g:solarized_contrast  = "normal"
let g:solarized_visibility= "normal"
colorscheme solarized

set nu
set incsearch
set mouse=a

set tabstop=8
"set expandtab
set shiftwidth=8
set smarttab

set autoindent
set smartindent

:command Path :echo expand('%:p')

"Plugins
call plug#begin()
filetype plugin on
Plug 'scrooloose/nerdcommenter'
call plug#end()
