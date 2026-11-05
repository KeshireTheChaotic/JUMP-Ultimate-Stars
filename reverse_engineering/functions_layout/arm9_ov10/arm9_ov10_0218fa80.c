
void FUN_0218fa80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_02190100();
  if (puVar2 != (undefined4 *)0x0) {
    cVar1 = *(char *)(puVar2 + 2);
    if (cVar1 == '\x04') {
      puVar2[9] = puVar2[9] + 1;
      FUN_02190018(puVar2,0);
      *(undefined1 *)(puVar2 + 2) = 6;
      return;
    }
    if (cVar1 == '\a') {
      puVar2[9] = puVar2[9] + 1;
      FUN_02190024(puVar2,0);
      *(undefined1 *)(puVar2 + 2) = 9;
      return;
    }
    if (cVar1 == '\b') {
      puVar2[9] = puVar2[9] + 1;
      FUN_02190024(puVar2,0);
      *(undefined1 *)(puVar2 + 2) = 0;
      if (puVar2[1] == 2) {
        puVar2[1] = 0;
        FUN_020531dc(*puVar2);
        return;
      }
    }
    else {
      FUN_0218ff48(param_1,param_2,param_3,0);
    }
  }
  return;
}

