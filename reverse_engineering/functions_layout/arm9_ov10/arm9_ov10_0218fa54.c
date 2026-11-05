
void FUN_0218fa54(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_02190100();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_02053008();
    *(undefined1 *)(puVar1 + 2) = 0;
    if (puVar1[1] - 1 < 2) {
      puVar1[1] = 0;
      FUN_020531dc(*puVar1);
    }
  }
  return;
}

