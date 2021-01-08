#ifndef PACK_REVINDEX_H
#define PACK_REVINDEX_H

struct packed_git;

struct revindex_entry {
	off_t offset;
	unsigned int nr;
};

int load_pack_revindex(struct packed_git *p);
int find_revindex_position(struct packed_git *p, off_t ofs);

struct revindex_entry *find_pack_revindex(struct packed_git *p, off_t ofs);

int offset_to_pack_pos(struct packed_git *p, off_t ofs, uint32_t *pos);
uint32_t pack_pos_to_index(struct packed_git *p, uint32_t pos);
off_t pack_pos_to_offset(struct packed_git *p, uint32_t pos);

#endif
