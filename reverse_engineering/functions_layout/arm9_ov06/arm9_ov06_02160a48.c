
void FUN_02160a48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)FUN_02033410(s_bin_clear_bin_02172324,0,0,param_4,param_4);
  if (piVar1[7] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  iVar6 = piVar1[7];
  piVar1 = *(int **)(iVar6 + 4);
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,0);
  DAT_020aff28 = 0;
  iVar4 = (int)DAT_020aff27;
  for (uVar5 = 0; (int)uVar5 < iVar4; uVar5 = uVar5 + 1) {
    if ((((uint)(byte)(&DAT_020b4084)[DAT_020b4114] & 1 << (uVar5 & 0xff)) == 0) &&
       (iVar3 = (*(code *)(&PTR_FUN_02172290)
                          [*(byte *)(iVar2 + (uint)(byte)(&DAT_020aff29)[uVar5] * 4)])
                          (param_1,iVar2 + (uint)(byte)(&DAT_020aff29)[uVar5] * 4), iVar3 != 0)) {
      DAT_020aff28 = DAT_020aff28 | (byte)(1 << (uVar5 & 0xff));
    }
  }
  (**(code **)(**(int **)(iVar6 + 4) + 0xc))();
  return;
}

