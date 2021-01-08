#ifndef PACK_REVINDEX_H
#define PACK_REVINDEX_H

#define GIT_TEST_WRITE_REV_INDEX "GIT_TEST_WRITE_REV_INDEX"

struct packed_git;

int load_pack_revindex(struct packed_git *p);

int offset_to_pack_pos(struct packed_git *p, off_t ofs, uint32_t *pos);
uint32_t pack_pos_to_index(struct packed_git *p, uint32_t pos);
off_t pack_pos_to_offset(struct packed_git *p, uint32_t pos);

#endif
