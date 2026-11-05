
int FUN_0217f8a4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 2) {
    return (int)*(short *)(&DAT_021814dc + param_2 * 2);
  }
  iVar1 = 0;
  while( true ) {
    if ((short)(&DAT_02181540)[iVar1 * 2] == -1) {
      return -1;
    }
    if (param_2 == (short)(&DAT_02181540)[iVar1 * 2]) break;
    iVar1 = iVar1 + 1;
  }
  return (int)(short)(&DAT_02181542)[iVar1 * 2];
}

