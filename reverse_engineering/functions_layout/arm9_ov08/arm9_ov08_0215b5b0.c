
void FUN_0215b5b0(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int local_28;
  ushort local_1c [4];
  
  uVar5 = DAT_0216a9fa;
  uVar4 = DAT_0216a9f8;
  uVar2 = DAT_0216a9f4;
  FUN_021663fc(*DAT_0216e778);
  uVar3 = DAT_0216a9f5;
  iVar6 = 0;
  local_1c[1] = 0;
  iVar7 = 0;
  local_28 = 0;
  do {
    if (iVar6 == 0x10) {
      iVar7 = local_28;
      uVar2 = uVar3;
    }
    bVar1 = *(byte *)((int)DAT_0216e778 + iVar6 + 8);
    if (bVar1 == 0x20) {
      local_1c[0] = 0xe01d;
    }
    else {
      local_1c[0] = (ushort)bVar1;
    }
    FUN_02166408(*DAT_0216e778,(&DAT_0216aa0c)[iVar7],uVar2,uVar4,uVar5,2,0x480,local_1c);
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar6 < 0x20);
  FUN_02166370(*DAT_0216e778);
  return;
}

