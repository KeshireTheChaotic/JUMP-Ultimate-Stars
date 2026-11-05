
void FUN_02077610(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint unaff_r11;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x5cc) = 0;
  *(undefined1 *)(param_1 + 0x5dd) = 0;
  *(undefined1 *)(param_1 + 0x5de) = 0;
  *(undefined1 *)(param_1 + 0x5df) = 0;
  do {
    iVar2 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x5e0) = 0;
  } while (iVar3 < 3);
  puVar5 = *(undefined4 **)(param_1 + 0x558);
  if (puVar5 == (undefined4 *)0x0) {
    return;
  }
  pcVar4 = (char *)(param_1 + 0x5cc);
  for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
    *(char *)(param_1 + 0x5dd) = *(char *)(param_1 + 0x5dd) + '\x01';
    bVar6 = *(byte *)(puVar5[0xd] + 0xb) & 0xf;
    if (bVar6 != 3) {
      unaff_r11 = (uint)*(byte *)(puVar5 + 0x10);
    }
    if (bVar6 != 3 && unaff_r11 != 2) {
      *pcVar4 = *pcVar4 + '\x01';
      if ('\x10' < *(char *)(param_1 + 0x5cc)) {
        *(undefined1 *)(param_1 + 0x5cc) = 0x10;
      }
      unaff_r11 = (uint)*(byte *)(puVar5 + 0x10);
      if (unaff_r11 == 0) {
        *pcVar4 = *pcVar4 + '\x01';
        unaff_r11 = (uint)*(char *)(param_1 + 0x5cc);
        if (0x10 < (int)unaff_r11) {
          *(undefined1 *)(param_1 + 0x5cc) = 0x10;
        }
      }
    }
    if (bVar6 != 2 && bVar6 != 3) {
      *(char *)(param_1 + 0x5df) = *(char *)(param_1 + 0x5df) + '\x01';
    }
    cVar1 = *(char *)(puVar5 + 0x10);
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0x5e0) = *(char *)(param_1 + 0x5e0) + '\x01';
    }
    else if (cVar1 == '\x01') {
      *(char *)(param_1 + 0x5e1) = *(char *)(param_1 + 0x5e1) + '\x01';
    }
    else if (cVar1 == '\x02') {
      *(char *)(param_1 + 0x5e2) = *(char *)(param_1 + 0x5e2) + '\x01';
    }
    if (*(char *)((int)puVar5 + 0x12) == '\x01') {
      *(char *)(param_1 + 0x5de) = *(char *)(param_1 + 0x5de) + '\x01';
    }
  }
  return;
}

