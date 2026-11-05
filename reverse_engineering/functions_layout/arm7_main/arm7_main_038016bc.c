
void FUN_038016bc(byte *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_038016fc(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  *param_1 = *param_1 & 0xfe;
  return;
}

