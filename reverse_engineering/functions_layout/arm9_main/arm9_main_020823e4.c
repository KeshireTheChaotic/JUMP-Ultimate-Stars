
ushort FUN_020823e4(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_2 + 0xc);
  iVar8 = *(int *)(param_1 + 0xc);
  iVar3 = iVar5;
  while ((iVar4 = *(int *)(iVar3 + 0x68), iVar4 != 0 && ((*(uint *)(iVar4 + 0x40) & 0x200) == 0))) {
    iVar3 = iVar4;
  }
  iVar4 = (int)*(char *)(*(int *)(param_2 + 0x10) + 4);
  uVar6 = 0;
  uVar7 = 0;
  if (((*(uint *)(iVar3 + 0x40) & 0x2000000) != 0) &&
     (uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4)),
     (*(uint *)(&DAT_02092e58 + ((int)*(short *)(iVar5 + 0x16e) >> 6) * 4) & uVar2 >> 3) == 0)) {
    iVar4 = iVar4 << 1;
    uVar6 = 1;
    uVar7 = 1;
    FUN_0207342c(0x7a,0x28);
  }
  iVar4 = iVar4 * 0x100 + ((int)(iVar4 * 0x100 * (*(ushort *)(iVar3 + 0x184) - 0x100)) >> 8);
  iVar4 = iVar4 + ((int)(iVar4 * (*(ushort *)(iVar3 + 0x186) - 0x100)) >> 8);
  if ((*(uint *)(param_2 + 0x18) & 0xc0) == 0) {
    uVar2 = *(byte *)(iVar5 + 0x175) & 3;
  }
  else if ((*(uint *)(param_2 + 0x18) & 0x40) == 0) {
    uVar2 = (*(byte *)(iVar5 + 0x175) & 0x3f) >> 4;
  }
  else {
    uVar2 = (*(byte *)(iVar5 + 0x175) & 0xf) >> 2;
  }
  if (((*(uint *)(iVar8 + 0x40) & 0x40000000) == 0) && ((*(uint *)(iVar3 + 0x40) & 0x40000000) == 0)
     ) {
    if (param_3 == 0) {
      iVar5 = (int)*(short *)(uVar2 * 2 + (*(byte *)(iVar8 + 0x175) & 3) * 8 + 0x209fef4);
    }
    else {
      iVar5 = (int)*(short *)(uVar2 * 2 + (*(byte *)(iVar8 + 0x175) & 3) * 8 + 0x209ff14);
    }
  }
  else {
    iVar5 = 0x100;
  }
  if (0x100 < iVar5) {
    uVar7 = uVar7 | 2;
    *(uint *)(iVar8 + 0x40) = *(uint *)(iVar8 + 0x40) | 0x400000;
    *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) | 0x200000;
    uVar6 = uVar7;
  }
  uVar2 = *(uint *)(iVar8 + 0x44);
  iVar3 = iVar4 * (iVar5 + -0x100) >> 8;
  iVar5 = (int)(*(char **)(param_2 + 0x10))[0xe];
  cVar1 = **(char **)(param_2 + 0x10);
  if (((uVar2 & 0x4000) != 0) &&
     ((cVar1 == '\x04' || cVar1 == '\x05' || ((*(uint *)(param_2 + 0x14) & 0xf0) != 0)))) {
    iVar3 = iVar3 + (iVar4 * 0x40 >> 8);
  }
  if (((uVar2 & 0x40) != 0) &&
     ((cVar1 == '\x04' || cVar1 == '\x05' || ((*(uint *)(param_2 + 0x14) & 0xf0) != 0)))) {
    uVar7 = uVar7 | 4;
    iVar3 = iVar3 - (iVar4 * 0x40 >> 8);
    uVar6 = uVar7;
  }
  if ((-1 < iVar5) && (iVar5 < 0x10)) {
    if (((uVar2 & 0x1000) != 0) && ((&DAT_02092e68)[iVar5] == '\x01')) {
      iVar3 = iVar3 + (iVar4 * 0x40 >> 8);
    }
    if (((uVar2 & 0x2000) != 0) && ((&DAT_02092e68)[iVar5] == '\x02')) {
      iVar3 = iVar3 + (iVar4 * 0x40 >> 8);
    }
    if (((uVar2 & 0x10) != 0) && ((&DAT_02092e68)[iVar5] == '\x01')) {
      uVar7 = uVar6 | 4;
      iVar3 = iVar3 - (iVar4 * 0x40 >> 8);
      uVar6 = uVar7;
    }
    if (((uVar2 & 0x20) != 0) && ((&DAT_02092e68)[iVar5] == '\x02')) {
      uVar7 = uVar6 | 4;
      iVar3 = iVar3 - (iVar4 * 0x40 >> 8);
    }
  }
  *param_4 = iVar4 + iVar3 >> 2;
  return uVar7;
}

