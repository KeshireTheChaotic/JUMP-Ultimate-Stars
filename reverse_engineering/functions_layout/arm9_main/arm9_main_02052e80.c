
void FUN_02052e80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *param_1 = 0;
  pcVar1 = pcRam02052e9c;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  (*pcVar1)(iVar2);
  return;
}

