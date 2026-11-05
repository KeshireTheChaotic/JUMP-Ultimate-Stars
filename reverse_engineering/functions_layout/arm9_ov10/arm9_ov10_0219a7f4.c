
undefined4 FUN_0219a7f4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = FUN_0217578c(&local_c,&local_10);
  *(undefined4 *)(DAT_0214ccf8 + 0x24) = uVar1;
  *(undefined4 *)(DAT_0214ccf8 + 0x2c) = local_c;
  *(undefined4 *)(DAT_0214ccf8 + 0x28) = local_10;
  if (*(int *)(DAT_0214ccf8 + 0x28) == 1) {
    FUN_02175770();
    iVar2 = *(int *)(DAT_0214ccf8 + 0x24);
    if ((iVar2 == 0xb || iVar2 == 0xc) || iVar2 == 0xd) {
      FUN_0219af04();
      uVar1 = 0;
      *(undefined4 *)(DAT_0214ccf8 + 0x24) = 0;
    }
  }
  return uVar1;
}

