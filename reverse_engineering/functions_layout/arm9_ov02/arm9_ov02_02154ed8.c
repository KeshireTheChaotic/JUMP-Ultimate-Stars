
void FUN_02154ed8(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_44;
  int local_40 [4];
  undefined1 auStack_30 [12];
  
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar3 = FUN_02154380(*(undefined4 *)(iVar9 + 8));
  FUN_0214fa00(auStack_30,uVar3);
  uVar1 = *(undefined1 *)(iVar9 + 0x35c);
  uVar2 = *(undefined1 *)(iVar9 + 0x35e);
  FUN_02154068(0x2d);
  for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar9 + 0x365); iVar6 = iVar6 + 1) {
    iVar10 = (uint)*(byte *)(iVar9 + iVar6 + 0x366) * 0x28 + iVar9;
    iVar8 = *(int *)(iVar10 + 0xd8);
    iVar7 = *(int *)(*(int *)(iVar8 + 4) + 0x124) * 0x48 + *(int *)(*(int *)(iVar9 + 0x330) + 0x34);
    FUN_020517fc(local_40,0,0x10);
    func_0x021b6214(*(undefined4 *)(iVar8 + 4),1);
    FUN_02154068(0x1e);
    for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(iVar7 + 0x44); iVar8 = iVar8 + 1) {
      piVar4 = *(int **)(*(int *)(iVar10 + iVar8 * 4 + 0xec) + 4);
      (**(code **)(*piVar4 + 0xd8))(piVar4,1);
      FUN_020193f0(&local_44,
                   *(int *)(*(int *)(*(int *)(iVar10 + iVar8 * 4 + 0xec) + 4) + 100) + 0x14);
      FUN_02153060(local_44);
      iVar5 = FUN_02153038();
      iVar5 = CommonPaletteAnime::CommonPaletteAnime_Create
                        (iVar5,1,*(short *)(*(int *)(iVar5 + 4) + 8) - 1U & 0xff,9,0x80);
      local_40[iVar8] = iVar5;
      *(undefined2 *)(iVar5 + 0x16) = 0xffff;
      *(undefined1 *)(iVar5 + 0x18) = 0x10;
      *(undefined1 *)(iVar5 + 0x11) = 0x10;
      *(undefined1 *)(iVar5 + 0x19) = 0xff;
    }
    FUN_0207342c(0x7b,5);
    FUN_02154068(0x5a);
    for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(iVar7 + 0x44); iVar8 = iVar8 + 1) {
      FUN_0206ae98(local_40[iVar8]);
    }
  }
  *(undefined1 *)(iVar9 + 0x35c) = uVar1;
  *(undefined1 *)(iVar9 + 0x35e) = uVar2;
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar9 + 0x10) + 4));
  *(undefined1 *)(*(int *)(iVar9 + 0x330) + 0x56) = *(undefined1 *)(iVar9 + 0x360);
  FUN_0214d348(*(int *)(iVar9 + 0x330),*(undefined1 *)(*(int *)(iVar9 + 0x330) + 0x56));
  return;
}

