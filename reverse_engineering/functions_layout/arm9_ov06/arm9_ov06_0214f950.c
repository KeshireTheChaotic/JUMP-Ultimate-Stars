
undefined4 FUN_0214f950(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (*(code *)(&PTR_FUN_0214fae4_1_02170eb4)[*(int *)(param_1 + 8) * 3])();
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x14); iVar3 = iVar3 + 1) {
    uVar1 = FUN_020789c0(*(undefined4 *)(DAT_02172960 + iVar3 * 4 + 0x118));
    (&DAT_020afeee)[iVar3] = uVar1;
  }
  return uVar2;
}

