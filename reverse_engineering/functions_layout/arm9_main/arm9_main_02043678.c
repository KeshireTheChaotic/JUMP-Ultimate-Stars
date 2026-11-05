
void FUN_02043678(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(uint *)(iVar1 + 4) = param_2 & 0xffff;
    *(undefined4 *)(iVar1 + 8) = param_3;
  }
  else {
    iVar1 = jus_AllocDebug(0x14);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_TagCLDS::jus_TagCLDS(iVar1,param_2,param_3,0,0,param_4);
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  return;
}

