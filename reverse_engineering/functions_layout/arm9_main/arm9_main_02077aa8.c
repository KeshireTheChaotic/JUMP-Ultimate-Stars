
void FUN_02077aa8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar1 + 0x5d7) = 0xff;
  } while (iVar3 < 3);
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if (*(char *)(puVar2 + 0x10) != '\x02') {
      if (((*(byte *)((int)puVar2 + 0xf) & 0x10) != 0) && (*(char *)(puVar2 + 0x10) == '\0')) {
        *(byte *)(param_1 + 0x5d7) =
             (*(byte *)((int)puVar2 + 0xe) & 0xf) + *(char *)((int)puVar2 + 0x45);
        *(char *)(param_1 + 0x5da) =
             (char)((int)(*(byte *)((int)puVar2 + 0xe) & 0xf0) >> 4) + *(char *)((int)puVar2 + 0x46)
        ;
      }
      if ((*(byte *)((int)puVar2 + 0xf) & 0x20) == 0) {
        if ((*(byte *)((int)puVar2 + 0xf) & 0x40) != 0) {
          *(byte *)(param_1 + 0x5d9) =
               (*(byte *)((int)puVar2 + 0xe) & 0xf) + *(char *)((int)puVar2 + 0x43);
          *(char *)(param_1 + 0x5dc) =
               (char)((int)(*(byte *)((int)puVar2 + 0xe) & 0xf0) >> 4) + *(char *)(puVar2 + 0x11);
        }
      }
      else {
        *(byte *)(param_1 + 0x5d8) =
             (*(byte *)((int)puVar2 + 0xe) & 0xf) + *(char *)((int)puVar2 + 0x43);
        *(char *)(param_1 + 0x5db) =
             (char)((int)(*(byte *)((int)puVar2 + 0xe) & 0xf0) >> 4) + *(char *)(puVar2 + 0x11);
      }
    }
  }
  return;
}

