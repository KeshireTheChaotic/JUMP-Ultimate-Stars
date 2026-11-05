
void FUN_02158a10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0xb8) =
       *(undefined2 *)(&DAT_02171108 + *(char *)(*(int *)(param_2 + 0x56c) + 0x10) * 2);
  iVar2 = (int)*(char *)(*(int *)(param_2 + 0x56c) + 0x11);
  iVar1 = iVar2 >> 0x1f;
  *(undefined2 *)(param_1 + 0xba) =
       *(undefined2 *)
        (&DAT_02171118 +
        ((int)((((uint)(iVar2 * 0x20000000 + iVar1) >> 0x1d | iVar1 << 3) - iVar1) * 0x1000000) >>
        0x17));
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}

