
void FUN_027e04c4(undefined2 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  
  *(undefined4 *)(param_1 + 2) = param_2[2];
  param_1[4] = *(undefined2 *)(param_2 + 3);
  if (*(short *)((int)param_2 + 0x12) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = 2;
  }
  if (*(short *)(param_2 + 5) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = 4;
  }
  *(byte *)((int)param_1 + 0xb) = bVar2 | *(short *)((int)param_2 + 0xe) != 0 | bVar1;
  *(char *)(param_1 + 5) = (char)*(undefined2 *)(param_2 + 1);
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[6] = *(undefined2 *)(param_2 + 0xd);
  param_1[7] = *(undefined2 *)((int)param_2 + 0x36);
  if (*(byte *)(param_1 + 5) != 0) {
    FUN_037fe788(*param_2,param_1 + 8,*(byte *)(param_1 + 5) + 1 & 0xfffffffe);
  }
  return;
}

