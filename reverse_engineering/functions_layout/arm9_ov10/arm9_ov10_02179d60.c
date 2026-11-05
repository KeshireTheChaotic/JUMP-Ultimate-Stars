
undefined4 FUN_02179d60(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_11c;
  undefined4 *local_118;
  undefined4 local_114 [32];
  undefined4 local_94 [32];
  
  iVar5 = 0;
  local_11c = 0;
  iVar3 = 1;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0xd) != '\0') {
    iVar1 = 4;
    puVar4 = local_94;
    local_118 = local_114;
    do {
      iVar2 = FUN_02178448();
      if ((param_1 & 1 << *(sbyte *)(iVar2 + iVar3 + 0x2c8)) == 0) {
        iVar2 = FUN_02178448();
        *local_118 = *(undefined4 *)(iVar2 + iVar1 + 0xf4);
        local_118 = local_118 + 1;
        iVar5 = iVar5 + 1;
      }
      else {
        iVar2 = FUN_02178448();
        *puVar4 = *(undefined4 *)(iVar2 + iVar1 + 0xf4);
        puVar4 = puVar4 + 1;
        local_11c = local_11c + 1;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_02178448();
    } while (iVar3 <= (int)(uint)*(byte *)(iVar2 + 0xd));
  }
  iVar1 = 0;
  if (0 < local_11c) {
    puVar4 = local_94;
    do {
      FUN_0217c024(0x10,*puVar4,0,0,local_114,iVar5);
      iVar3 = FUN_0217af70();
      if (iVar3 != 0) {
        return 0;
      }
      puVar4 = puVar4 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_11c);
  }
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a0) = 2;
  iVar1 = 0;
  if (0 < iVar5) {
    puVar4 = local_114;
    do {
      iVar3 = FUN_02179534(*puVar4,0);
      if (iVar3 != 0xff) {
        FUN_02176754();
      }
      puVar4 = puVar4 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a0) = 0;
  return 1;
}

