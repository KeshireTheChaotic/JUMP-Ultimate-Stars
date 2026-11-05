
undefined4 FUN_0215998c(undefined4 param_1,int param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_2 + 0x20 + param_3 * 0x4dc;
  *(char *)(iVar3 + 0x4d2) = *(char *)(iVar3 + 0x4d2) + -1;
  FUN_0215790c();
  iVar1 = FUN_0203b3f4();
  FUN_0214e2d8(*(undefined4 *)(iVar1 + 0x88),1,0x1e);
  iVar1 = FUN_0203b3f4();
  FUN_021597b4(*(undefined4 *)(iVar1 + 0x88),(uint)*(byte *)(iVar3 + 0x4d2),
               0x10 - (uint)*(byte *)(iVar3 + 0x4d2));
  FUN_0214d6e8();
  if (*(char *)(iVar3 + 0x4d2) != '\0') {
    return 1;
  }
  iVar1 = 0;
  do {
    piVar2 = *(int **)(*(int *)(param_2 + param_3 * 0x4dc + iVar1 * 4 + 0x350) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return 0;
}

