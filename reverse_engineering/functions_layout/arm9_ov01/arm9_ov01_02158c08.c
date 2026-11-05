
undefined4 FUN_02158c08(int param_1)

{
  byte bVar1;
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  bVar1 = *(byte *)(*(int *)(*(int *)(param_1 + 4) + 100) + 0x10);
  if (((char)bVar1 < '\0') && ((bVar1 & 3) >> 1 != 0)) {
    return 1;
  }
  return 0;
}

