
void FUN_02071f60(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0xff) * 0x5c;
  iVar1 = FUN_02078ad0(&DAT_020b0dbc + iVar2);
  if (iVar1 != 0) {
    FUN_02051890(param_2,&DAT_020b0dbc + iVar2,0x5c);
    DAT_020b02ac = 1;
  }
  FUN_02073114(0xb04,0x11f8);
  return;
}

