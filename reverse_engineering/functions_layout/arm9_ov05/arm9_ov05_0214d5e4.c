
void FUN_0214d5e4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (*(int *)(DAT_0214bd80 + 0x18e4) == 1) {
    puVar4 = &LAB_0214d5c0;
  }
  else {
    puVar4 = &LAB_0214d594;
  }
  *(undefined1 **)(DAT_0214bd80 + 0x18e8) = puVar4;
  *(undefined4 *)(DAT_0214bd80 + 0x18f8) = 0;
  *(undefined4 *)(DAT_0214bd80 + 0x18fc) = 0;
  *(undefined1 *)(DAT_0214bd80 + 0x1910) = 0;
  do {
    iVar2 = iVar6 * 2;
    iVar6 = iVar6 + 1;
    *(undefined2 *)(DAT_0214bd80 + iVar2 + 0x1900) = 0;
  } while (iVar6 < 8);
  uVar1 = (*(code *)(&PTR_FUN_0216f3ac)[param_2])
                    (*(undefined4 *)(DAT_0214bd80 + 0x58),*(undefined4 *)(DAT_0214bd80 + 0x30),
                     *(undefined4 *)(DAT_0214bd80 + 0x18ec));
  *(undefined4 *)(DAT_0214bd80 + 0x18f0) = uVar1;
  FUN_0214dd44(*(undefined4 *)(DAT_0214bd80 + 0x58),*(undefined4 *)(DAT_0214bd80 + 0x18f0));
  piVar5 = *(int **)(DAT_0214bd80 + 0x58);
  for (iVar6 = *(int *)(DAT_0214bd80 + 0x18f0); iVar6 != 0; iVar6 = iVar6 + -1) {
    iVar2 = *piVar5;
    iVar7 = DAT_0214bd80 + ((int)(uint)*(byte *)(iVar2 + 4) >> 5) * 4;
    *(uint *)(iVar7 + 0x18f8) = *(uint *)(iVar7 + 0x18f8) | 1 << (*(byte *)(iVar2 + 4) & 0x1f);
    *(byte *)(DAT_0214bd80 + 0x1910) =
         *(byte *)(DAT_0214bd80 + 0x1910) | (byte)(1 << (uint)*(byte *)(iVar2 + 8));
    puVar3 = (ushort *)(DAT_0214bd80 + *(char *)(iVar2 + 8) * 2 + 0x1900);
    *puVar3 = *puVar3 | (ushort)(1 << (uint)*(byte *)(iVar2 + 9));
    piVar5 = piVar5 + 2;
  }
  return;
}

