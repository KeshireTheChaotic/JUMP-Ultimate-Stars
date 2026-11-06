
void FUN_02158a00(int param_1)

{
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  if (*(byte *)(param_1 + 0x310) < 0xd) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(param_1 + 0x310)) {
    default:
      FUN_020734e0(0x2f);
      FUN_0207361c(0x2f,0);
      return;
    case 7:
      FUN_020734e0(4);
      FUN_0207361c(4,0);
      break;
    case 8:
      FUN_020734e0(5);
      FUN_0207361c(5,0);
      return;
    }
  }
  return;
}

