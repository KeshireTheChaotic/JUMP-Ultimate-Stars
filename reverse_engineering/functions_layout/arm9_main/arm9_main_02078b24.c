
undefined4 FUN_02078b24(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 1;
    }
    if (*(char *)(puVar2 + 0x10) == '\0') {
      if (param_3 == 0) {
        iVar1 = FUN_0200d12c(*(short *)(puVar2 + 6) * 100,(int)*(short *)((int)puVar2 + 0x16));
        if (param_2 < iVar1) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_0200d12c(*(short *)(puVar2 + 6) * 100,(int)*(short *)((int)puVar2 + 0x16));
        if (iVar1 < param_2) {
          return 0;
        }
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

