
void FUN_02170b2c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  do {
    if ((*(byte *)((int)puVar1 + 6) & 1) != 0) {
      *(byte *)((int)puVar1 + 6) = *(byte *)((int)puVar1 + 6) & 0xfe;
      FUN_02083648(*puVar1);
      *puVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (uVar2 < 0x20);
  FUN_020517fc(*(undefined4 *)(param_1 + 0x30),0,0x108);
  return;
}

