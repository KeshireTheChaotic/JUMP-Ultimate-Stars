
void FUN_02161e54(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  iVar1 = DAT_0216e7f0;
  puVar6 = (undefined1 *)(DAT_0216e7f0 + 0x400);
  puVar5 = (undefined1 *)(DAT_0216e7f0 + (uint)*(byte *)(DAT_0216e7f0 + 0x4f4) * 0x100);
  iVar3 = 0xf0;
  puVar4 = puVar5;
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(char *)(iVar1 + 0x4f5) == '\0') {
    FUN_02051890(iVar1 + 0x4c0,puVar5 + 0xc0,4);
    FUN_02051890(iVar1 + 0x4c4,puVar5 + 0xc4,4);
    uVar2 = FUN_0206a2e8(iVar1 + 0x4f0);
    puVar5[0xd0] = uVar2;
  }
  else {
    FUN_020517fc(puVar5 + 0xc0,0,4);
    FUN_020517fc(puVar5 + 0xc4,0,4);
    puVar5[0xd0] = 0;
  }
  if (*(char *)(iVar1 + 0x4f6) == '\0') {
    FUN_02051890(iVar1 + 0x4c8,puVar5 + 200,8);
  }
  else {
    FUN_020517fc(puVar5 + 200,0,8);
  }
  FUN_02161ad8(*(undefined1 *)(iVar1 + 0x4f4));
  return;
}

