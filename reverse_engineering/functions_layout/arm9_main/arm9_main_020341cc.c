
/* JUS-CLASS ALStreamImp::vfunc_06 [class-virtual] slot 6 of vtable 02094ac4 (own slot, not
   inherited) */

int ALStreamImp::vfunc_06(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(uint *)(param_1 + 0x24) < (uint)(*(int *)(param_1 + 8) + param_3)) {
    if (*(uint *)(param_1 + 0x24) == 0) {
      *(int *)(param_1 + 0x24) = param_3;
    }
    else {
      while (*(uint *)(param_1 + 0x24) < (uint)(*(int *)(param_1 + 8) + param_3)) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 1;
      }
    }
    uVar1 = jus_AllocDebug(*(undefined4 *)(param_1 + 0x24));
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_02051890(*(int *)(param_1 + 0x20),uVar1,*(undefined4 *)(param_1 + 0xc));
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      iVar2 = FUN_0201a9ec(uVar4);
      if (iVar2 == 0) {
        FUN_0201a958(uVar4,1);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  FUN_02051890(param_2,*(int *)(param_1 + 0x20) + *(int *)(param_1 + 8),param_3);
  iVar3 = *(int *)(param_1 + 8) + param_3;
  *(int *)(param_1 + 8) = iVar3;
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) <= iVar3) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return param_3;
}

