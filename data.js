var data = { name: 'program', line:'11', col:'5' ,info: '',children :[{ name: 'body', line:'11', col:'4' ,info: '',children :[{ name: 'declaration_list', line:'8', col:'6' ,info: '',children :[{ name: 'declaration', line:'6', col:'8' ,info: '',children :[{ name: 'var-decl_list', line:'5', col:'29' ,info: '',children :[{ name: 'var-decl', line:'5', col:'29' ,info: '',children :[{ name: 'identifier', line:'5', col:'10' ,info: 'i',},{ name: 'identifier', line:'5', col:'13' ,info: 'j',},{ name: 'type', line:'5', col:'23' ,info: 'INTEGER',children :[{ name: 'identifier', line:'5', col:'23' ,info: 'INTEGER',},]},{ name: 'expression', line:'5', col:'28' ,info: '1',children :[{ name: 'integer', line:'5', col:'28' ,info: '1',},]},]},]},]},{ name: 'declaration', line:'7', col:'8' ,info: '',children :[{ name: 'var-decl_list', line:'6', col:'25' ,info: '',children :[{ name: 'var-decl', line:'6', col:'25' ,info: '',children :[{ name: 'identifier', line:'6', col:'10' ,info: 'x',},{ name: 'type', line:'6', col:'17' ,info: 'REAL',children :[{ name: 'identifier', line:'6', col:'17' ,info: 'REAL',},]},{ name: 'expression', line:'6', col:'24' ,info: '2.0',children :[{ name: 'real', line:'6', col:'24' ,info: '2.0',},]},]},]},]},{ name: 'declaration', line:'8', col:'6' ,info: '',children :[{ name: 'var-decl_list', line:'7', col:'25' ,info: '',children :[{ name: 'var-decl', line:'7', col:'25' ,info: '',children :[{ name: 'identifier', line:'7', col:'10' ,info: 'y',},{ name: 'type', line:'7', col:'17' ,info: 'REAL',children :[{ name: 'identifier', line:'7', col:'17' ,info: 'REAL',},]},{ name: 'expression', line:'7', col:'24' ,info: '3.0',children :[{ name: 'real', line:'7', col:'24' ,info: '3.0',},]},]},]},]},]},{ name: 'statement_list', line:'10', col:'36' ,info: '',children :[{ name: 'statement', line:'9', col:'36' ,info: '',children :[{ name: 'write-params', line:'9', col:'35' ,info: '',children :[{ name: 'write-expr', line:'9', col:'18' ,info: '',children :[{ name: 'string', line:'9', col:'18' ,info: '"i = "',},]},{ name: 'write-expr', line:'9', col:'22' ,info: '',children :[{ name: 'expression', line:'9', col:'22' ,info: 'i',children :[{ name: 'lvalue', line:'9', col:'22' ,info: 'i',children :[{ name: 'identifier', line:'9', col:'21' ,info: 'i',},]},]},]},{ name: 'write-expr', line:'9', col:'31' ,info: '',children :[{ name: 'string', line:'9', col:'31' ,info: '", j = "',},]},{ name: 'write-expr', line:'9', col:'35' ,info: '',children :[{ name: 'expression', line:'9', col:'35' ,info: 'j',children :[{ name: 'lvalue', line:'9', col:'35' ,info: 'j',children :[{ name: 'identifier', line:'9', col:'34' ,info: 'j',},]},]},]},]},]},{ name: 'statement', line:'10', col:'36' ,info: '',children :[{ name: 'write-params', line:'10', col:'35' ,info: '',children :[{ name: 'write-expr', line:'10', col:'18' ,info: '',children :[{ name: 'string', line:'10', col:'18' ,info: '"x = "',},]},{ name: 'write-expr', line:'10', col:'22' ,info: '',children :[{ name: 'expression', line:'10', col:'22' ,info: 'x',children :[{ name: 'lvalue', line:'10', col:'22' ,info: 'x',children :[{ name: 'identifier', line:'10', col:'21' ,info: 'x',},]},]},]},{ name: 'write-expr', line:'10', col:'31' ,info: '',children :[{ name: 'string', line:'10', col:'31' ,info: '", y = "',},]},{ name: 'write-expr', line:'10', col:'35' ,info: '',children :[{ name: 'expression', line:'10', col:'35' ,info: 'y',children :[{ name: 'lvalue', line:'10', col:'35' ,info: 'y',children :[{ name: 'identifier', line:'10', col:'34' ,info: 'y',},]},]},]},]},]},]},]},]}
Vue.component('item', {
    template: '#item-template',
    props: {
        model: Object
    },
    data: function () {
        return {
            open: false
        }
    },
    computed: {
        isFolder: function () {
            return this.model.children &&
                this.model.children.length
        },
        isError: function () {
            return this.model.error
        }
    },
    methods: {
        toggle: function () {
            if (this.isFolder) {
                this.open = !this.open
            }
        }
    }
})

var demo = new Vue({
    el: '#demo',
    data: {
        treeData: data
    }
})
