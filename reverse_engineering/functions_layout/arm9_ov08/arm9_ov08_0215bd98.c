
void FUN_0215bd98(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  int iVar5;
  ushort local_18 [2];
  
  uVar3 = DAT_0216aa2e;
  uVar2 = DAT_0216aa22;
  uVar1 = DAT_0216aa20;
  FUN_021663fc(*DAT_0216e77c,0);
  iVar5 = 0;
  local_18[1] = 0;
  puVar4 = &DAT_0216aa34;
  do {
    local_18[0] = (ushort)*(byte *)((int)DAT_0216e77c + iVar5 + 8);
    FUN_02166408(*DAT_0216e77c,*puVar4,uVar3,uVar1,uVar2,2,0x480,local_18,*puVar4);
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xc);
  FUN_02166370(*DAT_0216e77c);
  return;
}

