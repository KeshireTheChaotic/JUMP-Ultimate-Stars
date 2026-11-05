
void FUN_02060720(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = 0;
  puVar2 = (uint *)(param_1 + (uint)*(ushort *)(param_1 + 0xc));
  if (*(short *)(param_1 + 0xe) == 0) {
    return;
  }
  do {
    uVar3 = *puVar2;
    if (uVar3 < 0x434d4151) {
      if ((0x434d414f < uVar3) && (puVar2[4] != 0)) {
        puVar2[4] = puVar2[4] + param_1;
      }
    }
    else if (uVar3 < 0x43574449) {
      if ((uVar3 == 0x43574448) && (puVar2[3] != 0)) {
        puVar2[3] = puVar2[3] + param_1;
      }
    }
    else if (uVar3 == 0x46494e46) {
      puVar2[4] = puVar2[4] + param_1;
      if (puVar2[5] != 0) {
        puVar2[5] = puVar2[5] + param_1;
      }
      if (puVar2[6] != 0) {
        puVar2[6] = puVar2[6] + param_1;
      }
    }
    iVar1 = iVar1 + 1;
    puVar2 = (uint *)((int)puVar2 + puVar2[1]);
  } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0xe));
  return;
}

