
int FUN_0216fb10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char local_24;
  undefined1 auStack_23 [3];
  undefined4 uStack_20;
  
  iVar6 = *(int *)(*(int *)(param_2 + 0x10) + 0x5c);
  uStack_20 = param_4;
  if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x400) != 0) {
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar6 + 0x10);
    FUN_0216e6d4(param_2,param_3 + 4,param_3 + 4);
  }
  iVar1 = FUN_02083624(FUN_0216e3d0,param_3,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffff | 0x1000,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x3c) & 0xffff,0);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
    param_1 = 0;
  }
  else {
    FUN_0216e820(iVar1,param_2,*(undefined4 *)(param_1 + 0x28));
    FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
    FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,0,0,0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) & 0xffefffff;
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) & 0xfffcffff;
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 8;
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 2;
    if (((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x200) != 0) &&
       (iVar1 = FUN_02083724(*(undefined4 *)(iVar6 + 0xc),*(int *)(iVar6 + 0x10) + 0x100,&local_24,
                             auStack_23), iVar1 != 0)) {
      if ((local_24 == '\0') && (0 < *(int *)(param_3 + 4) - *(int *)(iVar6 + 0xc))) {
        *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
        *(int *)(param_1 + 0x3c) = *(int *)(param_3 + 4) - *(int *)(iVar6 + 0xc);
      }
      else if ((local_24 == '\x01') && (*(int *)(param_3 + 4) - *(int *)(iVar6 + 0xc) < 0)) {
        *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
        *(int *)(param_1 + 0x3c) = *(int *)(param_3 + 4) - *(int *)(iVar6 + 0xc);
      }
    }
    iVar7 = *(int *)(param_1 + 0x2c);
    iVar1 = -1;
    uVar2 = *(uint *)(*(int *)(iVar7 + 0x10) + 0x34);
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if ((uVar2 & 0x11) != 0) {
        iVar1 = (int)(char)iVar3;
        break;
      }
      uVar2 = (int)(uVar2 & 0xff) >> 1;
    }
    BattleNoteTrack::Battle_NoteTrackCreate(iVar7 + 0x18,*(undefined4 *)(iVar7 + 8),iVar7,0,0);
    iVar3 = *(int *)(iVar7 + 0x18);
    FUN_02155634(iVar3,iVar1);
    *(undefined2 *)(iVar3 + 0xa4) = *(undefined2 *)(*(int *)(param_2 + 0x18) + 0xa4);
    *(undefined2 *)(iVar3 + 0xa6) = *(undefined2 *)(*(int *)(param_2 + 0x18) + 0xa6);
    FUN_0216fdb8(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar6 + 0xc),
                 *(undefined4 *)(iVar6 + 0x10));
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    uVar4 = *(undefined4 *)(iVar6 + 0xc);
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0xc) = uVar4;
    *(undefined4 *)(iVar1 + 0x10) = uVar5;
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x100;
    FUN_0216fdb8(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 4),
                 *(undefined4 *)(param_3 + 8));
    *(int *)(param_1 + 0x30) = param_2;
    FUN_02166a1c(param_1 + 0x40,iVar6 + 0xc);
  }
  return param_1;
}

