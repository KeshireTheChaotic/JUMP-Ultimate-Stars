
/* JUS-CLASS ALStreamImp::vfunc_05 [class-virtual] slot 5 of vtable 02094ac4 (own slot, not
   inherited) */

int ALStreamImp::vfunc_05(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1 + param_3;
  if (*(int *)(param_1 + 0xc) <= iVar1 + param_3) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  FUN_02051890(*(int *)(param_1 + 0x20) + iVar1,param_2,iVar2,iVar1,param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
  return iVar2;
}

