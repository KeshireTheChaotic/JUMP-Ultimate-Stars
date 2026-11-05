
void FUN_02161ad8(uint param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_28;
  int local_24 [4];
  
  cVar1 = *(char *)(DAT_0216e7f0 + param_1 * 0x100 + 0xe7);
  uVar4 = 1 << (param_1 & 0xff);
  FUN_020517fc(local_24,0,0x10);
  local_24[param_1] = 1;
  if ((int)param_1 < 3) {
    bVar8 = (*(byte *)(DAT_0216e7f0 + 0xef) & uVar4) == 0;
    bVar2 = (byte)uVar4;
    if ((cVar1 != -1) || (bVar8)) {
      if ((cVar1 != -1) && (bVar8)) {
        *(byte *)(DAT_0216e7f0 + 0xef) = *(byte *)(DAT_0216e7f0 + 0xef) | bVar2;
        *(byte *)(DAT_0216e7f0 + 0x1ef) = *(byte *)(DAT_0216e7f0 + 0x1ef) | bVar2;
        local_24[1] = 1;
        local_24[0] = 1;
      }
    }
    else {
      *(byte *)(DAT_0216e7f0 + 0xef) = *(byte *)(DAT_0216e7f0 + 0xef) & ~bVar2;
      *(byte *)(DAT_0216e7f0 + 0x1ef) = *(byte *)(DAT_0216e7f0 + 0x1ef) & ~bVar2;
      local_24[1] = 1;
      local_24[0] = 1;
    }
  }
  iVar7 = 0;
  piVar6 = local_24;
  iVar5 = 0;
  do {
    if (*piVar6 != 0) {
      uVar3 = FUN_02050e94(DAT_0216e7f0 + 0x4f8,DAT_0216e7f0 + iVar5,0xfe);
      *(undefined2 *)(DAT_0216e7f0 + iVar5 + 0xfe) = uVar3;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + 0x100;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  local_28 = FUN_02166ba8(0x100,0x20);
  func_0x0206a39c(DAT_0216e7f0,local_24);
  FUN_02166b5c(&local_28);
  return;
}

