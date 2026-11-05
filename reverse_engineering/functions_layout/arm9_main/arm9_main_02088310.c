
bool FUN_02088310(uint param_1)

{
  return (*(uint *)(iRam0208832c + 8) & 1 << (param_1 & 0xff)) != 0;
}

