
void FUN_02157114(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x174);
  iVar6 = *(int *)(iVar5 + 8);
  FUN_02161758(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(iVar5 + 0xc),iVar5,param_4,param_4);
  *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x20) =
       **(undefined4 **)(*(int *)(param_1 + 0x1a0) + 0x174);
  FUN_020839c0(*(undefined4 *)(param_1 + 0x1a8),**(undefined4 **)(param_1 + 0x1a0));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x6c) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 0xc);
  iVar5 = *(int *)(param_1 + 0x1a8);
  uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4);
  *(undefined4 *)(iVar5 + 0x1c) = uVar4;
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 != 0) {
    *(undefined4 *)(*(int *)(*(int *)(iVar5 + 4) + 0x10) + 0xe0) = uVar4;
  }
  if (*(char *)(iVar6 + 2) == '\x01') {
    FUN_0207cf18();
  }
  else {
    FUN_0207cf78(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0,0x20);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  *(byte *)(iVar5 + 0x175) =
       *(byte *)(iVar5 + 0x175) & 0xc0 | *(byte *)(iVar6 + 3) & 3 | (*(byte *)(iVar6 + 4) & 3) << 2
       | (*(byte *)(iVar6 + 5) & 3) << 4;
  sVar1 = *(short *)(iVar6 + 0x1e);
  sVar2 = *(short *)(iVar6 + 0x20);
  *(short *)(param_2 + 0xa4) = sVar1;
  *(short *)(param_2 + 0xa6) = sVar2;
  FUN_02157314(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 0xc),2,(int)sVar1);
  FUN_02157314(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 0xc),3,(int)sVar2);
  FUN_0215fac4(param_1 + 0x120,iVar6);
  FUN_02158a10(param_1,*(undefined4 *)(param_1 + 0x1b4));
  iVar5 = 0;
  if ((*(uint *)(param_1 + 0x128) & 2) != 0) {
    *(undefined1 *)(param_1 + 0xd8) = 2;
  }
  bVar7 = (*(uint *)(param_1 + 300) & 0x20) != 0;
  uVar3 = extraout_r1;
  if (bVar7) {
    uVar3 = 1;
  }
  if (!bVar7) {
    uVar3 = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1b4) + 0x5cf) = uVar3;
  do {
    FUN_02083be0(*(undefined4 *)(param_1 + 0x1a8),iVar5,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    iVar6 = iVar5 * 3;
    if ((*(uint *)(param_1 + ((uint)(int)(char)(&DAT_021710bc)[iVar6] >> 5) * 4 + 0x128) &
        1 << ((int)(char)(&DAT_021710bc)[iVar6] & 0x1fU)) != 0) {
      FUN_02083be0(*(undefined4 *)(param_1 + 0x1a8),(int)(char)(&DAT_021710bd)[iVar6],
                   (int)(char)(&DAT_021710be)[iVar6]);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xc);
  *(undefined1 *)(param_1 + 0xf9) = 1;
  return;
}

