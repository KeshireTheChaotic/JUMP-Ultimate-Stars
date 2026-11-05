
void FUN_02028724(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < *(char *)(param_1 + 0x29)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar1 = (undefined4 *)jus_AllocDebug(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      *(undefined4 **)(param_1 + 0x38) = puVar1;
    }
    else if (((param_4 & 1) != 0) &&
            (iVar2 = FUN_0201b57c(*(int *)(param_1 + 0x38),param_2[6],0,param_4,param_4), iVar2 != 0
            )) {
      iVar3 = iVar2;
      if (iVar2 != 0) {
        iVar3 = iVar2 + 4;
      }
      FUN_02037c24(*(undefined4 *)(param_1 + 0x38),iVar3);
      iVar3 = FUN_0201a9ec(iVar2);
      if (iVar3 == 0) {
        FUN_0201a958(iVar2,1);
      }
    }
    FUN_0201b4d0(*(undefined4 *)(param_1 + 0x38),param_2,param_3,0x80);
    FUN_02027edc(param_1);
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0x1c))();
  return;
}

