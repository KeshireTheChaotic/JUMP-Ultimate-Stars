
void FUN_02178f5c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar1 = param_1 + 399;
  param_1[0xd] = 0;
  do {
    puVar2 = puVar1 + 2;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    } while (puVar2 < puVar1 + 0x10);
    puVar1 = puVar1 + 0x12;
  } while (puVar1 < param_1 + 0x378f);
  puVar1 = param_1 + 0x3bdf;
  do {
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
  } while (puVar1 < param_1 + 0x9edf);
  return;
}

