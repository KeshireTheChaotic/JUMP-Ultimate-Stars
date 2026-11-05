
void FUN_0201d4e0(int param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  
  psVar1 = (short *)FUN_0201d4c4();
  sVar2 = *psVar1;
  if (*param_2 <= *psVar1) {
    sVar2 = *param_2;
  }
  *(short *)(param_1 + 4) = sVar2;
  sVar2 = psVar1[1];
  if (param_2[1] <= psVar1[1]) {
    sVar2 = param_2[1];
  }
  *(short *)(param_1 + 6) = sVar2;
  sVar2 = psVar1[2];
  if (psVar1[2] <= param_2[2]) {
    sVar2 = param_2[2];
  }
  *(short *)(param_1 + 8) = sVar2;
  sVar2 = psVar1[3];
  if (psVar1[3] <= param_2[3]) {
    sVar2 = param_2[3];
  }
  *(short *)(param_1 + 10) = sVar2;
  return;
}

