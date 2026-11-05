
void FUN_02087f20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = puRam02087f44;
  uVar2 = 0;
  do {
    (*(code *)*puVar1)();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}

