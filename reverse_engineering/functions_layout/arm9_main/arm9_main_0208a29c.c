
void FUN_0208a29c(int *param_1)

{
  *(uint *)(*param_1 + *(int *)(*param_1 + 0x78) * 4 + 0x18) =
       *(ushort *)(&DAT_0214ca62 + *(int *)(*param_1 + 0xc) * 8) & 0xefff;
  return;
}

