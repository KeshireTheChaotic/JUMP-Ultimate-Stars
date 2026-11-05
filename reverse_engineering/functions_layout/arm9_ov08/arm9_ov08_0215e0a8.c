
void FUN_0215e0a8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  
  iVar2 = FUN_021622d4();
  DAT_0216e794 = (undefined4 *)FUN_02166b8c(0x48,4);
  *(undefined1 *)((int)DAT_0216e794 + 0x43) = *(undefined1 *)(iVar2 + 0xf6);
  *(undefined1 *)((int)DAT_0216e794 + 0x42) = 0xc;
  FUN_0215df1c();
  FUN_0215df50();
  if (DAT_0216e788 == '\0') {
    iVar3 = FUN_0215702c();
    FUN_02154588(0x30,(int)(char)(&DAT_0216aa98)[iVar3],*(byte *)(iVar2 + 0xf4) + 1);
  }
  else {
    FUN_02154588(0x45,0xffffffff);
  }
  FUN_02154724(1);
  FUN_02154948();
  uVar4 = FUN_0200d12c((uint)DAT_0216e790 * 0x37,0x91);
  FUN_0216167c(2,0x55,0xf1,0x41,uVar4);
  uVar5 = FUN_021665f8(0,1);
  DAT_0216e794[5] = uVar5;
  cVar1 = s___RS0_0216aaed[0];
  iVar7 = 0;
  iVar3 = 0;
  do {
    uVar5 = FUN_02165ff4(0,cVar1);
    *(undefined4 *)((int)DAT_0216e794 + iVar3 + 0x18) = uVar5;
    iVar3 = iVar3 + 4;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 7);
  pcVar6 = (char *)(iVar2 + 0xe7);
  if (*pcVar6 == '\x01') {
    uVar5 = FUN_02165ff4(0,0x50);
    DAT_0216e794[0xd] = uVar5;
    *(ushort *)(DAT_0216e794[0xd] + 4) = *(ushort *)(DAT_0216e794[0xd] + 4) & 0xf3ff | 0xc00;
  }
  else if (*pcVar6 == '\x02') {
    uVar5 = FUN_02165ff4(0,0x51);
    DAT_0216e794[0xd] = uVar5;
    *(ushort *)(DAT_0216e794[0xd] + 4) = *(ushort *)(DAT_0216e794[0xd] + 4) & 0xf3ff | 0xc00;
  }
  uVar4 = FUN_02167814(1,0x215cd9d,0,0x6e,uVar4,pcVar6);
  DAT_0216e794[0xf] = uVar4;
  uVar4 = FUN_02167814(0,0x215ca0d,0,0x78);
  *DAT_0216e794 = uVar4;
  FUN_0215d660();
  FUN_0215cd10();
  FUN_02157088(0x215dee1);
  return;
}

