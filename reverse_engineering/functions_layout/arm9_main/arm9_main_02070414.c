
void FUN_02070414(void)

{
  int iVar1;
  int iVar2;
  
  DAT_020afe9c = 0xd;
  DAT_020afea0 = 0;
  DAT_020afeac = 0x116f;
  DAT_020afebb = 1;
  DAT_020afebc = 1;
  DAT_020afeba = 0;
  DAT_020afebd = 0;
  DAT_020afec2 = 0;
  DAT_020afec3 = 0;
  iVar1 = 0;
  do {
    (&DAT_020afeb0)[iVar1] = iVar1 != 0;
    (&DAT_020afeb4)[iVar1] = 0;
    (&DAT_020afec4)[iVar1] = 0;
    iVar2 = iVar1 + 1;
    (&DAT_020afebe)[iVar1] = 1;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  DAT_020afebe = 0;
  return;
}

