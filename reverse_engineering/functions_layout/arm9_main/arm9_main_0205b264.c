
int FUN_0205b264(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0205e0f0(&DAT_020ad630,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0205e0f0(&DAT_020ad63c,0);
    if (param_1 < (int)(uint)*(byte *)(iVar1 + 0x3d)) {
      return 0;
    }
    FUN_0205b2d8(iVar1);
  }
  FUN_0205e108(&DAT_020ad630,iVar1);
  *(char *)(iVar1 + 0x3d) = (char)param_1;
  FUN_0205b310(iVar1);
  return iVar1;
}

