
/* JUS-CLASS jus_Class_02098af8::vfunc_35 [class-virtual] slot 35 of vtable 02098af8 (own slot, not
   inherited) */

void jus_Class_02098af8::vfunc_35(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
                    /* JUS-TAG strings=["NULL","Name="] */
  iVar1 = *param_4;
  if (iVar1 == 0) {
    FUN_02004b18(param_2,&DAT_0209d970);
    return;
  }
  if (*(int *)(*(int *)(iVar1 + 4) + 8) == 0) {
    FUN_02004b18(param_2,s_Name__0209d978);
    FUN_02004bcc(param_2,*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
    return;
  }
  FUN_02004b18(param_2,&DAT_0209d980);
  FUN_020380d0(param_2 + 3,param_3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  return;
}

